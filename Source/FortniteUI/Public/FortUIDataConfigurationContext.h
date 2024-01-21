#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "Engine/Scene.h"
#include "EFortItemType.h"
#include "FortUIDataConfigurationContext.generated.h"

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UFortUIDataConfigurationContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UFortUIDataConfigurationContext();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseSpecificPinataWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestVOEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLimitedToES2Features() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChatEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EFortItemType> GetItemTypesToUseVaultCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPostProcessSettings GetFrontEndFFSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreSocialFeaturesEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ArePartyFeaturesEnabled() const;
    
};

