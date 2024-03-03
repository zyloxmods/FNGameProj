#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Templates/SubclassOf.h"
#include "RealTimeThumbnailSubsystem.generated.h"

class UFortThumbnailRenderer;

UCLASS(Blueprintable)
class FORTNITEGAME_API URealTimeThumbnailSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    URealTimeThumbnailSubsystem();
    UFUNCTION(BlueprintCallable)
    void DestroyThumbnailRenderer(UFortThumbnailRenderer* ThumbnailRenderer);
    
    UFUNCTION(BlueprintCallable)
    UFortThumbnailRenderer* CreateThumbnailRenderer(TSubclassOf<UFortThumbnailRenderer> ThumbnailRendererClass);
    
};

