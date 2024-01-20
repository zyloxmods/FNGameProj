#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ESettingTab.h"
#include "OnTabActivatedDelegate.h"
#include "OnTabDeactivatedDelegate.h"
#include "OnTabSettingChangedDelegate.h"
#include "SettingData.h"
#include "FortOptionsTab.generated.h"

class UCommonListView;
class UFortSettingInfo;

UCLASS(Blueprintable, EditInlineNew)
class UFortOptionsTab : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabSettingChanged OnTabSettingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabActivated OnTabActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabDeactivated OnTabDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* TabListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESettingTab TabType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortSettingInfo*> TabSettingsData;
    
public:
    UFortOptionsTab();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOptionsTab();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateOptions(bool UpdateQuality);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldShowSetting(FSettingData SettingData);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetOptionsToDefault();
    
    UFUNCTION(BlueprintCallable)
    bool IsXboxPlatform();
    
    UFUNCTION(BlueprintCallable)
    bool IsSwitchPlatform();
    
    UFUNCTION(BlueprintCallable)
    bool IsPS4Platform();
    
    UFUNCTION(BlueprintCallable)
    bool IsAthena();
    
    UFUNCTION(BlueprintCallable)
    void ConstructSettingList();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CenterOnTab();
    
};

