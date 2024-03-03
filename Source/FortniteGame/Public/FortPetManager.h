#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortPetManager.generated.h"

class AFortPlayerPetRepState;

UCLASS(Blueprintable)
class UFortPetManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPetRepState*> RegisteredPets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPetRepState*> PetsPendingUpdate;
    
public:
    UFortPetManager();
};

