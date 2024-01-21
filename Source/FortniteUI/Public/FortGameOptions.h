#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortOptionsTab.h"
#include "FortGameOptions.generated.h"

class UFortHUDVisibilityData;

UCLASS(Blueprintable, EditInlineNew)
class UFortGameOptions : public UFortOptionsTab {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortHUDVisibilityData*> HUDData;
    
public:
    UFortGameOptions();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePossibleLanguages();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateHUDSettings(FGameplayTag HUDMapping, bool NewVisibility) const;
    
    UFUNCTION(BlueprintCallable)
    void SetControllerPlatform(const FString& InControllerPlatform);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleGamePadToggleMode();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHUDSettings(FGameplayTag HUDMapping) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetControllerPlatform() const;
    
    UFUNCTION(BlueprintCallable)
    void ConstructHUDTagList();
    
};

