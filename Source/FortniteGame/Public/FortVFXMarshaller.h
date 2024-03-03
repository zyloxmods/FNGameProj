#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortVFXDataOwner.h"
#include "MarshalledVFXAuthoredData.h"
#include "MarshalledVFXRuntimeData.h"
#include "FortVFXMarshaller.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortVFXMarshaller : public UActorComponent, public IFortVFXDataOwner {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarshalledVFXAuthoredData AuthoredData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMarshalledVFXRuntimeData RuntimeData;
    
public:
    UFortVFXMarshaller();
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void Setup();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void DeactivateAll();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void Cleanup();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ActivateAll();
    
    
    // Fix for true pure virtual functions not being implemented
};

