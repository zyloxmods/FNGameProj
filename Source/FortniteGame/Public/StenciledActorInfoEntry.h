#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "StenciledActorData.h"
#include "StenciledActorInfoEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FStenciledActorInfoEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStenciledActorData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplaceExistingWhenAdded;
    
    FORTNITEGAME_API FStenciledActorInfoEntry();
};

