#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "InteractionType.h"
#include "FortInteractInterface.generated.h"

class AActor;
class USceneComponent;

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UFortInteractInterface : public UInterface {
	GENERATED_BODY()
};


class FORTNITEGAME_API IFortInteractInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual bool ServerOnAttemptInteract(const FInteractionType& InteractType) PURE_VIRTUAL(ServerOnAttemptInteract, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetIconPlacement(AActor* SelfActor, AActor* ViewingActor, FVector& OutLocation, FVector& OutExtents) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetFocusedSocketLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetBoundsComponents(AActor* SelfActor, TArray<USceneComponent*>& OutComponents) const;
    
};
