#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EFortActorIndicatorContainerWidget.h"
#include "FortActorIndicatorInterface.generated.h"

class AActor;
class UCanvasPanel;

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UFortActorIndicatorInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortActorIndicatorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetIndicatedActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCanvasPanel* GetCanvasPanelContainer(EFortActorIndicatorContainerWidget ContainerEnum) const;
    
};

