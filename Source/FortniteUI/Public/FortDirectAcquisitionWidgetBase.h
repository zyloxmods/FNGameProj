#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortMtxStoreRootBase.h"
#include "FortDirectAcquisitionWidgetBase.generated.h"

class UFortAccountItemDefinition;
class UGridPanel;
class UHorizontalBox;
class UScaleBox;
class UUserWidget;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDirectAcquisitionWidgetBase : public UFortMtxStoreRootBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowIneligible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* FirstOfferGenerated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_LargeTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanel* GridPanel_SmallTile;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_ReorderedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox_FeatureItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox_DailyItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* ScaleBox_Main;
    
public:
    UFortDirectAcquisitionWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayToast(const bool bDisplayToast);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAffiliateUpdated(const FString& AffiliateName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsTabsLayout(bool bShouldDisplayTabs);
    
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

