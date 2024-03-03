#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ContentBrowserTag.generated.h"

UCLASS(Blueprintable)
class UContentBrowserTag : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TagName;
    
    UContentBrowserTag();
};

