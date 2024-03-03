#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PossessPropClasses.generated.h"

class ABuildingActor;

USTRUCT(BlueprintType)
struct FPossessPropClasses : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ABuildingActor> ClassPath;
    
    FORTNITEGAME_API FPossessPropClasses();
};

