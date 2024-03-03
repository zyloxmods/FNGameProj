#pragma once
#include "CoreMinimal.h"
#include "FortAudioShapeComponent.h"
#include "OnAudioUpdateInAudibleRangeDelegate.h"
#include "FortSplineAudioComponent.generated.h"

class UAudioComponent;
class USoundBase;
class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortSplineAudioComponent : public UFortAudioShapeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ClosestPointSound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAudioUpdateInAudibleRange OnAudioUpdateInAudibleRange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
public:
    UFortSplineAudioComponent();
    UFUNCTION(BlueprintCallable)
    void SetSpline(USplineComponent* NewSpline);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* GetAudioComponent();
    
};

