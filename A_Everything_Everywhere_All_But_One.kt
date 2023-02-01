fun main()
{
    repeat(readln().toInt())
    {
        var n = readln().toInt()
        var ans = "NO"
        var v = readln().split(" ").map{it.toInt()}
        sum += v.sum()
        for(i in v)
        {
            if((sum-i)/(n-1) == 0f+i)
            {
                ans="YES";
                break;
            }
        }
        println(ans)
    }
}