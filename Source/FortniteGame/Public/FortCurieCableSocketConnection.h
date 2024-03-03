#pragma once
#include "CoreMinimal.h"
#include "FortCurieCableSocketIdentifier.h"
#include "FortCurieCableSocketConnection.generated.h"

class AActor;
class UFortCurieCableSocketComponent;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortCurieCableSocketConnection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ConnectedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCurieCableSocketIdentifier ConnectedSocketIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortCurieCableSocketComponent* ConnectedSocketComponent;
    
public:
    FFortCurieCableSocketConnection();
};

