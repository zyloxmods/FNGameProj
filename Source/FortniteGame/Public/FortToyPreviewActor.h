#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CosmeticPreviewInterface.h"
#include "FortUICameraFrameTargetInterface.h"
#include "FortToyPreviewActor.generated.h"

class UAthenaToyItemDefinition;

UCLASS(Abstract, Blueprintable)
class AFortToyPreviewActor : public AActor, public IFortUICameraFrameTargetInterface, public ICosmeticPreviewInterface {
    GENERATED_BODY()
public:
    AFortToyPreviewActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewToy(const UAthenaToyItemDefinition* Toy);
    
    
    // Fix for true pure virtual functions not being implemented
};

