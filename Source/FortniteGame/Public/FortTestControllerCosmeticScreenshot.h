#pragma once
#include "CoreMinimal.h"
#include "FortTestControllerBase.h"
#include "Templates/SubclassOf.h"
#include "FortTestControllerCosmeticScreenshot.generated.h"

class AActor;
class UAthenaCosmeticItemDefinition;

UCLASS(Blueprintable)
class UFortTestControllerCosmeticScreenshot : public UFortTestControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UAthenaCosmeticItemDefinition*> LoadedCosmetics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> WrappableActors;
    
public:
    UFortTestControllerCosmeticScreenshot();
};

