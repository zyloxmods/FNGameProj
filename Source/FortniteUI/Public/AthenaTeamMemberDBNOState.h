#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaTeamMemberDBNOState.generated.h"

class AFortPlayerStateAthena;
class UCommonLazyImage;
class UCommonLazyWidget;
class UCommonVisibilitySwitcher;
class UImage;
class UObject;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaTeamMemberDBNOState : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> DBNOIndicatorVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> RevivingIndicatorVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* Switcher_Indicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_DefaultIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_CustomIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* LazyImage_Indicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyWidget* LazyWidget_CustomWidgetContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* LazyImage_CustomWidgetTimer;
    
public:
    UAthenaTeamMemberDBNOState();
    UFUNCTION(BlueprintCallable)
    void SetPlayerState(AFortPlayerStateAthena* InPlayerState);
    
};

