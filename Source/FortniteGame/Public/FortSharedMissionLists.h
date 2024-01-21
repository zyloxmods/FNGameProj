#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "FortGlobalMission.h"
#include "FortMissionDistributionCategory.h"
#include "FortNonPrimaryMission.h"
#include "FortQuestDrivenMission.h"
#include "QuestDrivenMissionSubList.h"
#include "FortSharedMissionLists.generated.h"

class AFortPlayerController;
class UFortMissionGenerationList;
class UFortNonPrimaryMissionList;

UCLASS(Blueprintable, Config=Game)
class UFortSharedMissionLists : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortNonPrimaryMission> CombinedNonPrimaryMissionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortNonPrimaryMission> NonPrimaryMissionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortNonPrimaryMissionList>> NonPrimaryMissionLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMissionDistributionCategory> NonPrimaryMissionDistributionCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortMissionGenerationList>> WorldSetupMissionGenerationLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery PrimaryMissionTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TheaterTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery RegionTagQuery;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGlobalMission> SharedMissionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestDrivenMissionSubList> QuestDrivenMissionLists;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortQuestDrivenMission> AvailableQuestDrivenMissionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerController*> PendingPIEPlayers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DisableSharedMissionListIndices;
    
public:
    UFortSharedMissionLists();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePIEPlayers();
    
};

