#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortMtxStoreRootBase.h"
#include "FortDirectAcquisitionWidgetBase.generated.h"

class UFortAccountItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDirectAcquisitionWidgetBase : public UFortMtxStoreRootBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowIneligible;
    
public:
    UFortDirectAcquisitionWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayToast(const bool bDisplayToast);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAffiliateUpdated(const FString& AffiliateName);
    
    UFUNCTION(BlueprintCallable)
    void HandleAffiliateButtonClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetWeeklyStoreEndDate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFortAccountItemDefinition*> GetStoreCurrencies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetSeasonStoreEndDate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetDailyStoreEndDate() const;
    
};

