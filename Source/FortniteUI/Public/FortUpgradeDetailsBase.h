#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortUpgradeDetailsBase.generated.h"

class UFortUpgradeInfo;
class UMediaPlayer;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortUpgradeDetailsBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* VideoPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortUpgradeInfo* UpgradeInfo;
    
public:
    UFortUpgradeDetailsBase();
protected:
    UFUNCTION(BlueprintCallable)
    void RequestPurchaseNode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpgradeToDetailChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowIcon(UTexture2D* Icon);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScreenActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPurchaseComplete();
    
};

