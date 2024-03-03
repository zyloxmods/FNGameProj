#pragma once
#include "CoreMinimal.h"
#include "ObjectInteractionBehavior.h"
#include "DeleteObjects.generated.h"

class AActor;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDeleteObjects : public UObjectInteractionBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DeleteActors;
    
    UDeleteObjects();
    UFUNCTION(BlueprintCallable)
    void PlayDeleteAnimation();
    
    UFUNCTION(BlueprintCallable)
    void GetDeleteActorsMeshComponents(TArray<UMeshComponent*>& Components);
    
};

