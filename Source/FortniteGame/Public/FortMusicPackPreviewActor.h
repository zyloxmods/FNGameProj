#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CosmeticPreviewInterface.h"
#include "FortUICameraFrameTargetInterface.h"
#include "FortMusicPackPreviewActor.generated.h"

class UAthenaMusicPackItemDefinition;

UCLASS(Abstract, Blueprintable)
class AFortMusicPackPreviewActor : public AActor, public IFortUICameraFrameTargetInterface, public ICosmeticPreviewInterface {
    GENERATED_BODY()
public:
    AFortMusicPackPreviewActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewMusicPack(const UAthenaMusicPackItemDefinition* MusicPack);
    
    
    // Fix for true pure virtual functions not being implemented
};

