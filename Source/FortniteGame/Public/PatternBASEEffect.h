#pragma once
#include "CoreMinimal.h"
#include "PatternBASEEffect.generated.h"

class UBuildingEditModeMetadata;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FPatternBASEEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildingEditModeMetadata* Pattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    FORTNITEGAME_API FPatternBASEEffect();
};

