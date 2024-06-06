#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EStatCategory.h"
#include "FortItemQuantityPair.h"
#include "FortWorldItemDefinition.h"
#include "FortBadgeItemDefinition.generated.h"

class APlayerController;
class UFortCardPackItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortBadgeItemDefinition : public UFortWorldItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FailedDisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BadgeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UIMissionPointsOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BadgeScoringValuesHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortCardPackItemDefinition> BadgeCardPackReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> ItemRewards;
    
public:
    UFortBadgeItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUIMissionPointsOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScoreAwarded(const APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBadgeScoreThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStatCategory GetBadgeScoreCategory() const;
    
};

