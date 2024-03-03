#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortItemCaptureActor.generated.h"

class UFortItemDefinition;
class UFortItemThumbnailRenderer;

UCLASS(Blueprintable)
class AFortItemCaptureActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ItemDefinition;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItemThumbnailRenderer> Renderer;
    
public:
    AFortItemCaptureActor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupCapture(UFortItemThumbnailRenderer* InRenderer, UFortItemDefinition* InItemDefinition);
    
};

