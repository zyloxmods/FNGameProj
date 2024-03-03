#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AuxiliaryEditTileMeshData.generated.h"

class UStaticMesh;
class UTexture2D;

USTRUCT(BlueprintType)
struct FAuxiliaryEditTileMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* TileMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TileTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RelativeRot;
    
    FORTNITEGAME_API FAuxiliaryEditTileMeshData();
};

