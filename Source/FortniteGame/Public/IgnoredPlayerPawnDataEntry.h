#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "IgnoredPlayerPawnDataEntry.generated.h"

class AFortPlayerPawnAthena;

USTRUCT(BlueprintType)
struct FIgnoredPlayerPawnDataEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawnAthena* IgnoredPawn;
    
    FORTNITEGAME_API FIgnoredPlayerPawnDataEntry();
};

