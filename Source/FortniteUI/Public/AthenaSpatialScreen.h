#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "GameplayTagContainer.h"
#include "AthenaSpatialScreen.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UAthenaSpatialScreen : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSpatialInputPreprocessing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAnalytics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag OverrideScreenTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Back;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ScreenTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_CloseMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsBottomBar;
    
public:
    UAthenaSpatialScreen();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInputSuspensionChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FireSpatialScreenAnalytic(const FString& Interaction);
    
    UFUNCTION(BlueprintCallable)
    void AddSpatialScreenSessionCounter(const FString& Entry, int32 Count);
    
};

