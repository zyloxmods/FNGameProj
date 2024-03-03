#pragma once
#include "CoreMinimal.h"
#include "BuildingFoundation.h"
#include "WorldTileFoundation.generated.h"

UCLASS(Blueprintable)
class AWorldTileFoundation : public ABuildingFoundation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 NumRotations;
    
    AWorldTileFoundation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

