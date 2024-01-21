#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EFortQuestObjectiveItemEvent.h"
#include "EFortQuestObjectiveStatEvent.h"
#include "FortMinigameStatFilter.generated.h"

class AFortPlayerController;
class UFortItemDefinition;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortMinigameStatFilter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuestObjectiveStatEvent StatEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuestObjectiveItemEvent ItemEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemDefinition> ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TargetTagsQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery SourceTagsQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ContextTagsQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAccumulates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HudShortDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> HudIcon;
    
    UFortMinigameStatFilter();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Matches(EFortQuestObjectiveStatEvent InStatEvent, UObject* InTargetObject, AFortPlayerController* InPlayerController, const FGameplayTagContainer& InTargetTags, const FGameplayTagContainer& InSourceTags, const FGameplayTagContainer& InContextTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText FormatStat(int32 InCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 Compare(int32 FirstScore, int32 SecondScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Accumulate(int32 A, int32 B) const;
    
};

