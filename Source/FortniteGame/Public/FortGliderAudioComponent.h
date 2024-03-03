#pragma once
#include "CoreMinimal.h"
#include "FortLayeredAudioComponent.h"
#include "FortGliderAudioComponent.generated.h"

class AFortPlayerParachute;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortGliderAudioComponent : public UFortLayeredAudioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugIgnoreFullyDeployed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerParachute* PlayerParachute;
    
    UFortGliderAudioComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateGliderAudio(float ForwardDot, float RightDot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParachuteFullyDeployed() const;
    
};

