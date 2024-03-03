#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ExpeditionTabInfo.h"
#include "Templates/SubclassOf.h"
#include "FortExpeditionOverviewWidget.generated.h"

class UCommonButton;
class UFortExpeditionListViewWidget;
class UFortTabListWidgetBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortExpeditionOverviewWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButton> TabButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExpeditionTabInfo> TabListRegistrationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTabListWidgetBase* ExpeditionTabList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortExpeditionListViewWidget* ExpeditionListView;
    
public:
    UFortExpeditionOverviewWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateExpeditionTabs();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExpeditionTabSelected(const FName TabNameID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExpeditionOverviewRefresh();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleExpeditionTabSelected(FName TabNameID);
    
    UFUNCTION(BlueprintCallable)
    void HandleExpeditionTabButtonCreated(FName TabNameID, UCommonButton* TabButton);
    
};

