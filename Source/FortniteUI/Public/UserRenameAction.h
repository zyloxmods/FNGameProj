#pragma once
#include "CoreMinimal.h"
#include "UserAction.h"
#include "UserRenameAction.generated.h"

USTRUCT(BlueprintType)
struct FUserRenameAction : public FUserAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PreviousName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewName;
    
    FORTNITEUI_API FUserRenameAction();
};

