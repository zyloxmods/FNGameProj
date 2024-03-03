#pragma once
#include "CoreMinimal.h"
#include "FortEvenlySizedSegment.generated.h"

class UCapsuleComponent;
class USplineMeshComponent;

USTRUCT(BlueprintType)
struct FFortEvenlySizedSegment {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* SplineMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
public:
    FORTNITEGAME_API FFortEvenlySizedSegment();
};

