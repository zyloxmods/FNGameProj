#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MashPlayerDataEntry.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FMashPlayerDataEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* PlayerState;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Scores[12];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalScore;
    
    FORTNITEGAME_API FMashPlayerDataEntry();
};

