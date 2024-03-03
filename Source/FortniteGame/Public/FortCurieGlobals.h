#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CurieGlobals.h"
#include "FortCurieGlobals.generated.h"

class UFortCurieFXSettings;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCurieGlobals : public UCurieGlobals {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath CurieFXSettingsPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCurieFXSettings* CurieFXSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultElementCollisionExpansion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCurieApplicationViaDamageFormulaTags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurieElementsBlockBuildingEdit;
    
public:
    UFortCurieGlobals();
};

