#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PowPlayerDataEntry.generated.h"

class AFortAthenaMutator_Pow;
class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FPowPlayerDataEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentMaxShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Pow* PowMutator;
    
    FORTNITEGAME_API FPowPlayerDataEntry();
};

