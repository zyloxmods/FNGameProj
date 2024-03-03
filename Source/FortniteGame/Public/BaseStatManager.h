#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseStatManager.generated.h"

class AController;
class UStat;

UCLASS(Blueprintable)
class UBaseStatManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStat*> Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* Controller;
    
    UBaseStatManager();
};

