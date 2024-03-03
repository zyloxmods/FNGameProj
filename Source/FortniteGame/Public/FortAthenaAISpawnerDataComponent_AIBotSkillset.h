#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent_SkillsetBase.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAISpawnerDataComponent_AIBotSkillset.generated.h"

class UDataTable;
class UFortAthenaAIBotAimingSkillSet;
class UFortAthenaAIBotAttackingSkillSet;
class UFortAthenaAIBotBuildingSkillSet;
class UFortAthenaAIBotDBNOSkillSet;
class UFortAthenaAIBotEmoteSkillSet;
class UFortAthenaAIBotEvasiveManeuversSkillSet;
class UFortAthenaAIBotHarvestSkillSet;
class UFortAthenaAIBotHealingSkillSet;
class UFortAthenaAIBotInventorySkillSet;
class UFortAthenaAIBotLootingSkillSet;
class UFortAthenaAIBotMovementSkillSet;
class UFortAthenaAIBotPerceptionSkillSet;
class UFortAthenaAIBotPlayStyleSkillSet;
class UFortAthenaAIBotPropagateAwarenessSkillSet;
class UFortAthenaAIBotRangeAttackSkillSet;
class UFortAthenaAIBotReviveSkillSet;
class UFortAthenaAIBotUnstuckSkillSet;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_AIBotSkillset : public UFortAthenaAISpawnerDataComponent_SkillsetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAIBotAimingSkillSet> AimingSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAIBotAttackingSkillSet> AttackingSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAIBotBuildingSkillSet> BuildingSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAIBotDBNOSkillSet> DBNOSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAIBotEmoteSkillSet> EmoteSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAIBotEvasiveManeuversSkillSet> EvasiveManeuversSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAIBotHarvestSkillSet> HarvestSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAIBotHealingSkillSet> HealingSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAIBotInventorySkillSet> InventorySkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAIBotLootingSkillSet> LootingSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAIBotMovementSkillSet> MovementSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAIBotPerceptionSkillSet> PerceptionSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAIBotPlayStyleSkillSet> PlayStyleSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAIBotPropagateAwarenessSkillSet> PropagateAwarenessSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAIBotRangeAttackSkillSet> RangeAttackSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAIBotReviveSkillSet> ReviveSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAIBotUnstuckSkillSet> UnstuckSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseMatchMMRToOverrideSkillLevel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> OverrideSkillLevelMMRTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Skill;
    
public:
    UFortAthenaAISpawnerDataComponent_AIBotSkillset();
};

