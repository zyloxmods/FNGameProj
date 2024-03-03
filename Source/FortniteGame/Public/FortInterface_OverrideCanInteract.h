#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractionType.h"
#include "FortInterface_OverrideCanInteract.generated.h"

class IFortInteractInterface;
class UFortInteractInterface;
class UFortControllerComponent_Interaction;

UINTERFACE(Blueprintable)
class UFortInterface_OverrideCanInteract : public UInterface {
    GENERATED_BODY()
};

class IFortInterface_OverrideCanInteract : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldSuppressInteractionWidget(const UFortControllerComponent_Interaction* PCInteractionComponent, const TScriptInterface<IFortInteractInterface>& ObjectBeingInteractedWithInterface, const FInteractionType& InteractionType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldSuppressDisplayInteraction(const UFortControllerComponent_Interaction* PCInteractionComponent, const TScriptInterface<IFortInteractInterface>& ObjectBeingInteractedWithInterface, const FInteractionType& InteractionType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldOverrideCanInteract(bool& bOutCanInteract, const UFortControllerComponent_Interaction* PCInteractionComponent, const TScriptInterface<IFortInteractInterface>& ObjectBeingInteractedWithInterface, const FInteractionType& InteractionType) const;
    
};

