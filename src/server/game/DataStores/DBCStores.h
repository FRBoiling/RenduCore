/*
 * This file is part of the TrinityCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TRINITY_DBCSTORES_H
#define TRINITY_DBCSTORES_H

#include "DBCStore.h"
#include "DBCStructure.h"
#include "SharedDefines.h"
#include <list>
#include <map>
#include <unordered_map>

enum LocaleConstant : uint8;

 // temporary hack until includes are sorted out (don't want to pull in Windows.h)
#ifdef GetClassName
#undef GetClassName
#endif

typedef std::list<uint32> SimpleFactionsList;
RENDU_GAME_API SimpleFactionsList const* GetFactionTeamList(uint32 faction);

RENDU_GAME_API char* GetPetName(uint32 petfamily, uint32 dbclang);
RENDU_GAME_API uint32 GetTalentSpellCost(uint32 spellId);
RENDU_GAME_API TalentSpellPos const* GetTalentSpellPos(uint32 spellId);

RENDU_GAME_API char const* GetRaceName(uint8 race, uint8 locale);
RENDU_GAME_API char const* GetClassName(uint8 class_, uint8 locale);

RENDU_GAME_API WMOAreaTableEntry const* GetWMOAreaTableEntryByTripple(int32 rootid, int32 adtid, int32 groupid);

RENDU_GAME_API uint32 GetVirtualMapForMapAndZone(uint32 mapid, uint32 zoneId);

enum ContentLevels : uint8
{
    CONTENT_1_60 = 0,
    CONTENT_61_70,
    CONTENT_71_80
};
RENDU_GAME_API ContentLevels GetContentLevelsForMapAndZone(uint32 mapid, uint32 zoneId);

RENDU_GAME_API bool IsTotemCategoryCompatiableWith(uint32 itemTotemCategoryId, uint32 requiredTotemCategoryId);

RENDU_GAME_API void Zone2MapCoordinates(float &x, float &y, uint32 zone);
RENDU_GAME_API void Map2ZoneCoordinates(float &x, float &y, uint32 zone);

typedef std::map<uint32/*pair32(map, diff)*/, MapDifficulty> MapDifficultyMap;
RENDU_GAME_API MapDifficulty const* GetMapDifficultyData(uint32 mapId, Difficulty difficulty);
RENDU_GAME_API MapDifficulty const* GetDownscaledMapDifficultyData(uint32 mapId, Difficulty &difficulty);

RENDU_GAME_API uint32 const* /*[MAX_TALENT_TABS]*/ GetTalentTabPages(uint8 cls);

RENDU_GAME_API uint32 GetLiquidFlags(uint32 liquidType);

RENDU_GAME_API PvPDifficultyEntry const* GetBattlegroundBracketByLevel(uint32 mapid, uint32 level);
RENDU_GAME_API PvPDifficultyEntry const* GetBattlegroundBracketById(uint32 mapid, BattlegroundBracketId id);

RENDU_GAME_API CharacterFacialHairStylesEntry const* GetCharFacialHairEntry(uint8 race, uint8 gender, uint8 facialHairID);
RENDU_GAME_API CharSectionsEntry const* GetCharSectionEntry(uint8 race, CharSectionType genType, uint8 gender, uint8 type, uint8 color);
RENDU_GAME_API CharStartOutfitEntry const* GetCharStartOutfitEntry(uint8 race, uint8 class_, uint8 gender);

RENDU_GAME_API LFGDungeonEntry const* GetLFGDungeon(uint32 mapId, Difficulty difficulty);

RENDU_GAME_API uint32 GetDefaultMapLight(uint32 mapId);

typedef std::unordered_multimap<uint32, SkillRaceClassInfoEntry const*> SkillRaceClassInfoMap;
typedef std::pair<SkillRaceClassInfoMap::iterator, SkillRaceClassInfoMap::iterator> SkillRaceClassInfoBounds;
RENDU_GAME_API SkillRaceClassInfoEntry const* GetSkillRaceClassInfo(uint32 skill, uint8 race, uint8 class_);

RENDU_GAME_API ResponseCodes ValidateName(std::wstring const& name, LocaleConstant locale);

RENDU_GAME_API EmotesTextSoundEntry const* FindTextSoundEmoteFor(uint32 emote, uint32 race, uint32 gender);

RENDU_GAME_API extern DBCStorage <AchievementEntry>             sAchievementStore;
RENDU_GAME_API extern DBCStorage <AchievementCriteriaEntry>     sAchievementCriteriaStore;
RENDU_GAME_API extern DBCStorage <AreaTableEntry>               sAreaTableStore;
RENDU_GAME_API extern DBCStorage <AreaGroupEntry>               sAreaGroupStore;
RENDU_GAME_API extern DBCStorage <AreaPOIEntry>                 sAreaPOIStore;
RENDU_GAME_API extern DBCStorage <AreaTriggerEntry>             sAreaTriggerStore;
RENDU_GAME_API extern DBCStorage <AuctionHouseEntry>            sAuctionHouseStore;
RENDU_GAME_API extern DBCStorage <BankBagSlotPricesEntry>       sBankBagSlotPricesStore;
RENDU_GAME_API extern DBCStorage <BannedAddOnsEntry>            sBannedAddOnsStore;
RENDU_GAME_API extern DBCStorage <BarberShopStyleEntry>         sBarberShopStyleStore;
RENDU_GAME_API extern DBCStorage <BattlemasterListEntry>        sBattlemasterListStore;
RENDU_GAME_API extern DBCStorage <ChatChannelsEntry>            sChatChannelsStore;
RENDU_GAME_API extern DBCStorage <CharacterFacialHairStylesEntry> sCharacterFacialHairStylesStore;
RENDU_GAME_API extern DBCStorage <CharSectionsEntry>            sCharSectionsStore;
RENDU_GAME_API extern DBCStorage <CharStartOutfitEntry>         sCharStartOutfitStore;
RENDU_GAME_API extern DBCStorage <CharTitlesEntry>              sCharTitlesStore;
RENDU_GAME_API extern DBCStorage <ChrClassesEntry>              sChrClassesStore;
RENDU_GAME_API extern DBCStorage <ChrRacesEntry>                sChrRacesStore;
RENDU_GAME_API extern DBCStorage <CinematicCameraEntry>         sCinematicCameraStore;
RENDU_GAME_API extern DBCStorage <CinematicSequencesEntry>      sCinematicSequencesStore;
RENDU_GAME_API extern DBCStorage <CreatureDisplayInfoEntry>     sCreatureDisplayInfoStore;
RENDU_GAME_API extern DBCStorage <CreatureDisplayInfoExtraEntry> sCreatureDisplayInfoExtraStore;
RENDU_GAME_API extern DBCStorage <CreatureFamilyEntry>          sCreatureFamilyStore;
RENDU_GAME_API extern DBCStorage <CreatureModelDataEntry>       sCreatureModelDataStore;
RENDU_GAME_API extern DBCStorage <CreatureSpellDataEntry>       sCreatureSpellDataStore;
RENDU_GAME_API extern DBCStorage <CreatureTypeEntry>            sCreatureTypeStore;
RENDU_GAME_API extern DBCStorage <CurrencyTypesEntry>           sCurrencyTypesStore;
RENDU_GAME_API extern DBCStorage <DestructibleModelDataEntry>   sDestructibleModelDataStore;
RENDU_GAME_API extern DBCStorage <DungeonEncounterEntry>        sDungeonEncounterStore;
RENDU_GAME_API extern DBCStorage <DurabilityCostsEntry>         sDurabilityCostsStore;
RENDU_GAME_API extern DBCStorage <DurabilityQualityEntry>       sDurabilityQualityStore;
RENDU_GAME_API extern DBCStorage <EmotesEntry>                  sEmotesStore;
RENDU_GAME_API extern DBCStorage <EmotesTextEntry>              sEmotesTextStore;
RENDU_GAME_API extern DBCStorage <EmotesTextSoundEntry>         sEmotesTextSoundStore;
RENDU_GAME_API extern DBCStorage <FactionEntry>                 sFactionStore;
RENDU_GAME_API extern DBCStorage <FactionTemplateEntry>         sFactionTemplateStore;
RENDU_GAME_API extern DBCStorage <GameObjectArtKitEntry>        sGameObjectArtKitStore;
RENDU_GAME_API extern DBCStorage <GameObjectDisplayInfoEntry>   sGameObjectDisplayInfoStore;
RENDU_GAME_API extern DBCStorage <GemPropertiesEntry>           sGemPropertiesStore;
RENDU_GAME_API extern DBCStorage <GlyphPropertiesEntry>         sGlyphPropertiesStore;
RENDU_GAME_API extern DBCStorage <GlyphSlotEntry>               sGlyphSlotStore;

RENDU_GAME_API extern DBCStorage <GtBarberShopCostBaseEntry>    sGtBarberShopCostBaseStore;
RENDU_GAME_API extern DBCStorage <GtCombatRatingsEntry>         sGtCombatRatingsStore;
RENDU_GAME_API extern DBCStorage <GtChanceToMeleeCritBaseEntry> sGtChanceToMeleeCritBaseStore;
RENDU_GAME_API extern DBCStorage <GtChanceToMeleeCritEntry>     sGtChanceToMeleeCritStore;
RENDU_GAME_API extern DBCStorage <GtChanceToSpellCritBaseEntry> sGtChanceToSpellCritBaseStore;
RENDU_GAME_API extern DBCStorage <GtChanceToSpellCritEntry>     sGtChanceToSpellCritStore;
RENDU_GAME_API extern DBCStorage <GtNPCManaCostScalerEntry>     sGtNPCManaCostScalerStore;
RENDU_GAME_API extern DBCStorage <GtOCTClassCombatRatingScalarEntry> sGtOCTClassCombatRatingScalarStore;
RENDU_GAME_API extern DBCStorage <GtOCTRegenHPEntry>            sGtOCTRegenHPStore;
//RENDU_GAME_API extern DBCStorage <GtOCTRegenMPEntry>            sGtOCTRegenMPStore; -- not used currently
RENDU_GAME_API extern DBCStorage <GtRegenHPPerSptEntry>         sGtRegenHPPerSptStore;
RENDU_GAME_API extern DBCStorage <GtRegenMPPerSptEntry>         sGtRegenMPPerSptStore;
RENDU_GAME_API extern DBCStorage <HolidaysEntry>                sHolidaysStore;
RENDU_GAME_API extern DBCStorage <ItemEntry>                    sItemStore;
RENDU_GAME_API extern DBCStorage <ItemBagFamilyEntry>           sItemBagFamilyStore;
//RENDU_GAME_API extern DBCStorage <ItemDisplayInfoEntry>      sItemDisplayInfoStore; -- not used currently
RENDU_GAME_API extern DBCStorage <ItemExtendedCostEntry>        sItemExtendedCostStore;
RENDU_GAME_API extern DBCStorage <ItemLimitCategoryEntry>       sItemLimitCategoryStore;
RENDU_GAME_API extern DBCStorage <ItemRandomPropertiesEntry>    sItemRandomPropertiesStore;
RENDU_GAME_API extern DBCStorage <ItemRandomSuffixEntry>        sItemRandomSuffixStore;
RENDU_GAME_API extern DBCStorage <ItemSetEntry>                 sItemSetStore;
RENDU_GAME_API extern DBCStorage <LFGDungeonEntry>              sLFGDungeonStore;
RENDU_GAME_API extern DBCStorage <LightEntry>                   sLightStore;
RENDU_GAME_API extern DBCStorage <LiquidTypeEntry>              sLiquidTypeStore;
RENDU_GAME_API extern DBCStorage <LockEntry>                    sLockStore;
RENDU_GAME_API extern DBCStorage <MailTemplateEntry>            sMailTemplateStore;
RENDU_GAME_API extern DBCStorage <MapEntry>                     sMapStore;
//RENDU_GAME_API extern DBCStorage <MapDifficultyEntry>           sMapDifficultyStore; -- use GetMapDifficultyData insteed
RENDU_GAME_API extern MapDifficultyMap                          sMapDifficultyMap;
RENDU_GAME_API extern DBCStorage <MovieEntry>                   sMovieStore;
RENDU_GAME_API extern DBCStorage <OverrideSpellDataEntry>       sOverrideSpellDataStore;
RENDU_GAME_API extern DBCStorage <PowerDisplayEntry>            sPowerDisplayStore;
RENDU_GAME_API extern DBCStorage <QuestSortEntry>               sQuestSortStore;
RENDU_GAME_API extern DBCStorage <QuestXPEntry>                 sQuestXPStore;
RENDU_GAME_API extern DBCStorage <QuestFactionRewEntry>         sQuestFactionRewardStore;
RENDU_GAME_API extern DBCStorage <RandPropPointsEntry>          sRandPropPointsStore;
RENDU_GAME_API extern DBCStorage <ScalingStatDistributionEntry> sScalingStatDistributionStore;
RENDU_GAME_API extern DBCStorage <ScalingStatValuesEntry>       sScalingStatValuesStore;
RENDU_GAME_API extern DBCStorage <SkillLineEntry>               sSkillLineStore;
RENDU_GAME_API extern DBCStorage <SkillLineAbilityEntry>        sSkillLineAbilityStore;
RENDU_GAME_API extern DBCStorage <SkillTiersEntry>              sSkillTiersStore;
RENDU_GAME_API extern DBCStorage <SoundEntriesEntry>            sSoundEntriesStore;
RENDU_GAME_API extern DBCStorage <SpellCastTimesEntry>          sSpellCastTimesStore;
RENDU_GAME_API extern DBCStorage <SpellCategoryEntry>           sSpellCategoryStore;
RENDU_GAME_API extern DBCStorage <SpellDifficultyEntry>         sSpellDifficultyStore;
RENDU_GAME_API extern DBCStorage <SpellDurationEntry>           sSpellDurationStore;
RENDU_GAME_API extern DBCStorage <SpellFocusObjectEntry>        sSpellFocusObjectStore;
RENDU_GAME_API extern DBCStorage <SpellItemEnchantmentEntry>    sSpellItemEnchantmentStore;
RENDU_GAME_API extern DBCStorage <SpellItemEnchantmentConditionEntry> sSpellItemEnchantmentConditionStore;
RENDU_GAME_API extern PetFamilySpellsStore                      sPetFamilySpellsStore;
RENDU_GAME_API extern DBCStorage <SpellRadiusEntry>             sSpellRadiusStore;
RENDU_GAME_API extern DBCStorage <SpellRangeEntry>              sSpellRangeStore;
RENDU_GAME_API extern DBCStorage <SpellRuneCostEntry>           sSpellRuneCostStore;
RENDU_GAME_API extern DBCStorage <SpellShapeshiftFormEntry>     sSpellShapeshiftFormStore;
RENDU_GAME_API extern DBCStorage <SpellEntry>                   sSpellStore;
RENDU_GAME_API extern DBCStorage <SpellVisualEntry>             sSpellVisualStore;
RENDU_GAME_API extern DBCStorage <StableSlotPricesEntry>        sStableSlotPricesStore;
RENDU_GAME_API extern DBCStorage <SummonPropertiesEntry>        sSummonPropertiesStore;
RENDU_GAME_API extern DBCStorage <TalentEntry>                  sTalentStore;
RENDU_GAME_API extern DBCStorage <TalentTabEntry>               sTalentTabStore;
RENDU_GAME_API extern DBCStorage <TaxiNodesEntry>               sTaxiNodesStore;
RENDU_GAME_API extern DBCStorage <TaxiPathEntry>                sTaxiPathStore;
RENDU_GAME_API extern TaxiMask                                  sTaxiNodesMask;
RENDU_GAME_API extern TaxiMask                                  sOldContinentsNodesMask;
RENDU_GAME_API extern TaxiMask                                  sHordeTaxiNodesMask;
RENDU_GAME_API extern TaxiMask                                  sAllianceTaxiNodesMask;
RENDU_GAME_API extern TaxiMask                                  sDeathKnightTaxiNodesMask;
RENDU_GAME_API extern TaxiPathSetBySource                       sTaxiPathSetBySource;
RENDU_GAME_API extern TaxiPathNodesByPath                       sTaxiPathNodesByPath;
RENDU_GAME_API extern DBCStorage <TransportAnimationEntry>      sTransportAnimationStore;
RENDU_GAME_API extern DBCStorage <TransportRotationEntry>       sTransportRotationStore;
RENDU_GAME_API extern DBCStorage <TeamContributionPointsEntry>  sTeamContributionPointsStore;
RENDU_GAME_API extern DBCStorage <TotemCategoryEntry>           sTotemCategoryStore;
RENDU_GAME_API extern DBCStorage <VehicleEntry>                 sVehicleStore;
RENDU_GAME_API extern DBCStorage <VehicleSeatEntry>             sVehicleSeatStore;
RENDU_GAME_API extern DBCStorage <WMOAreaTableEntry>            sWMOAreaTableStore;
//RENDU_GAME_API extern DBCStorage <WorldMapAreaEntry>           sWorldMapAreaStore; -- use Zone2MapCoordinates and Map2ZoneCoordinates
RENDU_GAME_API extern DBCStorage <WorldMapOverlayEntry>         sWorldMapOverlayStore;
RENDU_GAME_API extern DBCStorage <WorldSafeLocsEntry>           sWorldSafeLocsStore;

RENDU_GAME_API void LoadDBCStores(const std::string& dataPath);

#endif
