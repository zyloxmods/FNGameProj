#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ArsenicPlayerDataEntry.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FArsenicPlayerDataEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRevealedTeam;
    
    ARSENICRUNTIME_API FArsenicPlayerDataEntry();
};

