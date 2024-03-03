#pragma once
#include "CoreMinimal.h"
#include "SpringGroundTriangle.generated.h"

USTRUCT(BlueprintType)
struct FSpringGroundTriangle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Socket0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Socket1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Socket2;
    
    FORTNITEGAME_API FSpringGroundTriangle();
};

