#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortBuildingAddStructuralSupportComponent.generated.h"

class ABuildingSMActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortBuildingAddStructuralSupportComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABuildingSMActor*> AddedStructuralBuildingActors;
    
    UFortBuildingAddStructuralSupportComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void DestroyAddedStructuralBuildingActors();
    
};

