#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VisibilityInfo.generated.h"

class AActor;
class UFortVisibilityComponent;

USTRUCT(BlueprintType)
struct FVisibilityInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UFortVisibilityComponent* VisibilityComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 TeamVisibilityFlag;
    
    FORTNITEGAME_API FVisibilityInfo();
};

