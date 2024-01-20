#pragma once
#include "CoreMinimal.h"
#include "McpPrivacySettings.h"
#include "FortOptionsTab.h"
#include "FortAccountOptions.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAccountOptions : public UFortOptionsTab {
    GENERATED_BODY()
public:
    UFortAccountOptions();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowSamsungStore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRefundRequestText(int32 RefundsRemaining);
    
    UFUNCTION(BlueprintCallable)
    void SetPrivacySettings(const FMcpPrivacySettings& NewPrivacySettings);
    
    UFUNCTION(BlueprintCallable)
    void SetCanReceiveGifts(bool bInCanReceiveGifts);
    
    UFUNCTION(BlueprintCallable)
    void SaveSettingsToMcp();
    
    UFUNCTION(BlueprintCallable)
    void LoadSamsungOptions(TArray<FText>& OutOptions, int32& CurrentOptionIdx);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSamsungStoreSetting(int32 SettingIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLocalPlayerReceiveGifts() const;
    
};

