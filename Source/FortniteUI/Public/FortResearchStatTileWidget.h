#pragma once
#include "CoreMinimal.h"
#include "EFortStatType.h"
#include "Blueprint/UserWidget.h"
#include "FortResearchStatTileWidget.generated.h"

class UFortStatItemDefinition;

UCLASS(Blueprintable, EditInlineNew)
class UFortResearchStatTileWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortStatItemDefinition* PersonalStatItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortStatItemDefinition* TeamStatItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatCostCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatPersonalDeltaCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatPersonalCumulativeCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatTeamDeltaCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatTeamCumulativeCurveName;
    
public:
    UFortResearchStatTileWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStatChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAtMaxResearchLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStatIdName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortStatType GetPersonalStatType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextTeamStatValueDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextPersonalStatValueDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextCombinedStatValueDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentTeamStatValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentResearchLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPersonalStatValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentCombinedStatValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCostToIncreaseStat() const;
    
};

