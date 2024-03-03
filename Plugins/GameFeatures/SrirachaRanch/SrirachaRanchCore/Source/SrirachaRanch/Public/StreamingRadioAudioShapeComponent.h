#pragma once
#include "CoreMinimal.h"
#include "FortAudioShapeComponent.h"
#include "StreamingRadioAudioShapeComponent.generated.h"

class UStreamingRadioPlayerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStreamingRadioAudioShapeComponent : public UFortAudioShapeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStreamingRadioPlayerComponent* RadioPlayer;
    
    UStreamingRadioAudioShapeComponent();
};

