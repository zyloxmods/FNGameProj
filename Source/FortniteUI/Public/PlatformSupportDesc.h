#pragma once
#include "CoreMinimal.h"
#include "EFortLoginAccountType.h"
#include "PlatformSupportDesc.generated.h"

USTRUCT(BlueprintType)
struct FPlatformSupportDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisableDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortLoginAccountType AccountType;
    
    FORTNITEUI_API FPlatformSupportDesc();
};

