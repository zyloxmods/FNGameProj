#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortSocialDisplayLibrary.generated.h"

class UImage;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortSocialDisplayLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortSocialDisplayLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetPlatformPrefixIcon(UImage* Image, const FString& OtherPlayerPlatform);
    
};

