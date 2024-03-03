#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "XPEventEntry.h"
#include "XPEventArray.generated.h"

class UFortPlayerControllerAthenaXPComponent;

USTRUCT(BlueprintType)
struct FXPEventArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FXPEventEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerControllerAthenaXPComponent* ParentComp;
    
    FORTNITEGAME_API FXPEventArray();
};

