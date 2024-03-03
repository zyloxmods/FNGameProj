#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MaterialReservation.h"
#include "FortMaterialCache.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class UFortMaterialCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMaterialReservation> Reservations;
    
public:
    UFortMaterialCache();
    UFUNCTION(BlueprintCallable)
    bool ReserveMaterial(UMaterialInstanceDynamic*& OutMaterialInstance);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseMaterial(UPARAM(Ref) UMaterialInstanceDynamic*& MaterialInstance);
    
};

