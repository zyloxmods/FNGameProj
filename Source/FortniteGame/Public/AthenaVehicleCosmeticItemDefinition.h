#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AthenaCosmeticItemDefinition.h"
#include "EFortVehicleDecoType.h"
#include "AthenaVehicleCosmeticItemDefinition.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class UAthenaVehicleCosmeticItemDefinition : public UAthenaCosmeticItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortVehicleDecoType DecoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform DecoSocketTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> TestDecoMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DecoSocketName;
    
    UAthenaVehicleCosmeticItemDefinition(const FObjectInitializer& ObjectInitializer);
};

